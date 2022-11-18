<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <style>
        body {font-family: Arial, Helvetica, sans-serif;}
    </style>
    <title>Pagina</title>
</head>
<body>
    <form action="">
        <p>Nome:<input type="text" name="Nome" /></p>
        <p>CPF:<input type="text" name="CPF" /></p>
        <p>Email:<input type="email" name="EMAIL" /></p>
        <p>
            <strong>Selecione a sua cidade:<br></strong>
        </p>
            <select name=" Endereço" id="">
            <option value="João Pessoa">João Pessoa</option>
            <option value="Natal">Natal</option>
            <option value="Recife">Recife</option>
        </select>
        <strong><p>Selecione o curso:</p></strong>
        <p><input type="checkbox" name="Android">Android</p>
        <p><input type="checkbox" name="Python">Python</p>
        <p><input type="checkbox" name="HTML/CSS">HTML/CSS</p>
        <p><input type="checkbox" name="JavaScript">JavaScript</p>
        <p>Selecione a faixa etária de idade:</p>
        <p><input type="radio">18 à 25</p>
        <p><input type="radio">26 à 30</p>
        <p><input type="radio">31 à 45</p>
        <p><input type="radio">45 à 61</p>
        <input type="submit" value="Enviar">
        <input type="submit" value="Limpar">
        
    </form>
</body>
</html>